#pragma once
#include"pch.h"
#include<iostream>
#include<vector>;
template<typename T>
class Graph
{
public:
	typedef T value_type;
	typedef std::vector<T> VertexList;
	typedef std::vector<std::vector<bool>> AdjacencyMatrix;
	typedef typename VertexList::iterator VertextIterator;
	typedef typename AdjacencyMatrix::iterator MatrixIterator;
	Graph() = default;
	Graph(value_type info);
	Graph(const Graph& other);
	void Add_Vertex(value_type);
	void Add_Edge(int, int);
	bool Is_Vertex_In_Graph(value_type);
	bool Is_Edge_Between(int, int);
	int Vertex_Degree(int);
	int Get_Amount_Of_Vertices();
	int Get_Amount_Of_Edges();
	void Delete_Edge(int, int);
	void Delete_Vertex(int);
	void Clear_Graph();
	MatrixIterator Vertex_List_Begin(int ind)
	{
	
		return matrix_[ind].begin();
	}
	MatrixIterator Vertex_List_End(int ind)
	{
		return matrix_[ind].end();
	}
	~Graph();
private:
	
	VertexList vertex_list_;
	AdjacencyMatrix matrix_;
};

template<typename T>
inline Graph<T>::Graph(value_type info)
{
	std::vector<bool> to_pull;
		to_pull.push_back(0);
		matrix_.push_back(to_pull);
		vertex_list_.push_back(info);
}

template<typename T>
inline Graph<T>::Graph(const Graph& other)
{
	matrix_ = other.matrix_;
	vertex_list_ = other.vertex_list_;

}

template<typename T>
inline void Graph<T>::Add_Vertex(value_type info)
{
	std::vector<bool> to_pull;
	for (int i = 0; i < matrix_.size() + 1; i++) { to_pull.push_back(0); }
	for (int i = 0; i < matrix_.size(); i++) { matrix_[i].push_back(0); }
	matrix_.push_back(to_pull);
	vertex_list_.push_back(info);

} 

template<typename T>
inline void Graph<T>::Add_Edge(int i, int j)
{
	
	matrix_[i][j] = 1;
	matrix_[j][i] = 1;

}

template<typename T>
inline bool Graph<T>::Is_Vertex_In_Graph(value_type info)
{
	for (int i = 0; i < vertex_list_.size(); i++)
	{
		if (vertex_list_[i] == info)
			return true;
	}
	return false;
}

template<typename T>
inline bool Graph<T>::Is_Edge_Between(int i, int j)
{
	if (matrix_[i][j] == 1 && matrix_[j][i] == 1)
		return true;
	else false;
}

template<typename T>
inline int Graph<T>::Vertex_Degree(int ind)
{
	int count = 0;
	for (int j = 0;  j < matrix_.size(); j++)
	{
		if (matrix_[ind][j] == 1)
			count++;
	}
	if (matrix_[ind][ind] == 1)
		count++;
	return count;
}

template<typename T>
inline int Graph<T>::Get_Amount_Of_Vertices()
{
	return matrix_.size();
}

template<typename T>
inline int Graph<T>::Get_Amount_Of_Edges()
{
	int count=0;
	for (int i = 0; i < matrix_.size(); i++)
		for (int j = 0; j < matrix_.size(); j++)	if (matrix_[i][j] == 1) count++;

	return count / 2;

}

template<typename T>
inline void Graph<T>::Delete_Edge(int i, int j)
{

	matrix_[i][j] = 0;
	matrix_[j][i] = 0;
}

template<typename T>
inline void Graph<T>::Delete_Vertex(int ind)
{

	matrix_.erase(matrix_.begin() + ind);
	for (auto& row : matrix_)
	{
		row.erase(row.begin() + ind);
	}
	
	vertex_list_.erase(vertex_list_.begin() + ind);
}

template<typename T>
inline void Graph<T>::Clear_Graph()
{
	for (int i = 0; i < matrix_.size(); i++)
	{
		matrix_[i].clear();
	}
	matrix_.clear();
	vertex_list_.clear();
}


template<typename T>
inline Graph<T>::~Graph()
{
Clear_Graph();
}
