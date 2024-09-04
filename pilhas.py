# import matplotlib.pyplot as plt
# import networkx as nx

# G = nx.Graph()
# G.add_edge('Valentina', 'Paratibe', weight='5')
# G.add_edge('Valentina', 'Mucumagro', weight='4')
# G.add_edge('Valentina', 'Colinas do Sul', weight='6')
# G.add_edge('Paratibe', 'Valentina', weight='5')
# G.add_edge('Paratibe', 'Ernesto Geisel', weight='7')
# G.add_edge('Paratibe', 'Gramame', weight='3')
# G.add_edge('Paratibe', 'Cristo', weight='9')
# G.add_edge('Paratibe', 'Bayeux', weight='10')
# G.add_edge('Mucumagro', 'Valentina', weight='4')
# G.add_edge('Mucumagro', 'Gramame', weight='2')
# G.add_edge('Mucumagro', 'Mangabeira', weight='8')
# G.add_edge('Colinas do Sul', 'Valentina', weight='6')
# G.add_edge('Colinas do Sul', 'Ernesto Geisel', weight='3')
# G.add_edge('Colinas do Sul', 'Mangabeira', weight='5')
# G.add_edge('Ernesto Geisel', 'Paratibe', weight='7')
# G.add_edge('Ernesto Geisel', 'Colinas do Sul', weight='3')
# G.add_edge('Ernesto Geisel', 'Mangabeira', weight='4')
# G.add_edge('Ernesto Geisel', 'Cristo', weight='6')
# G.add_edge('Ernesto Geisel', 'Tambau', weight='10')
# G.add_edge('Mangabeira', 'Mucumagro', weight='8')
# G.add_edge('Mangabeira', 'Colinas do Sul', weight='5')
# G.add_edge('Mangabeira', 'Ernesto Geisel', weight='4')
# G.add_edge('Mangabeira', 'Tambau', weight='9')
# G.add_edge('Mangabeira', 'Gramame', weight='6')
# G.add_edge('Gramame', 'Paratibe', weight='3')
# G.add_edge('Gramame', 'Mucumagro', weight='2')
# G.add_edge('Gramame', 'Mangabeira', weight='6')
# G.add_edge('Gramame', 'Cristo', weight='6')
# G.add_edge('Bayeux', 'Cristo', weight='7')
# G.add_edge('Bayeux', 'Paratibe', weight='10')
# G.add_edge('Bayeux', 'Santa Rita', weight='5')
# G.add_edge('Santa Rita', 'Bayeux', weight='5')
# G.add_edge('Santa Rita', 'Tambau', weight='18')
# G.add_edge('Tambau', 'Ernesto Geisel', weight='10')
# G.add_edge('Tambau', 'Mangabeira', weight='9')
# G.add_edge('Tambau', 'Bessa', weight='4')
# G.add_edge('Tambau', 'Santa Rita', weight='18')
# G.add_edge('Bessa', 'Tambau', weight='4')
# G.add_edge('Bessa', 'Mangabeira', weight='18')

# pos = nx.spring_layout(G, k=.8,seed=200)  
# nx.draw_networkx_nodes(G, pos, node_size=3000, node_color='#e1e8f2', edgecolors='black')
# nx.draw_networkx_edges(G, pos, width=2, alpha=0.5, edge_color='gray', style='dashed')
# nx.draw_networkx_labels(G, pos, font_size=9, font_family='sans-serif')
# edge_labels = nx.get_edge_attributes(G, 'weight')
# nx.draw_networkx_edge_labels(G, pos, edge_labels=edge_labels, font_color='red', font_size=9)
# plt.title('Mapa de Bairros')
# plt.axis('off')
# plt.show()

def removeall(x,c):
    return [ int(y) for y in x if y != c]
    
def compara(lista):
    lista_grande = []
    for x in lista:
        lista_grande.extend(x)
    antigo = 0
    for elemnt1 in sorted(lista_grande):
            if(antigo == elemnt1):
                return print(f"Elemento Repetido na lista: {elemnt1}")
            antigo = elemnt1
    print(f'Total de Numeros: {len(lista_grande)}')
    print("\n")
    for x in lista_grande:
         print(f'JB_0{x}.jpg')
            
numeros_a = '''
04180
04192
04196
04374
04392
04394
04395
04397
04401
04406
04246
04244
04248
04267
04280
'''

numeros_b = '''
04061
04062
04063
04064
04065
04174
04173
04167
04178
04184
04188
04198
04200
04202
04203
04205
04206
04235
04312
04316
04318
04320
04325
04327
04329
04332
04342
04348
04341
04384
04390
04403
'''

numeros_c = '''
04399
04086
04105
04110
04119
04132
04292
04079
04381
04066
04068
04075
04087
04106
04125
04147
04207
04139
04360
'''

# numeros_a= '''
# 04061
# 04068
# 04075
# 04087
# 04106
# 04125
# 04147
# 04207
# 04139
# 04360
# '''
# numeros_b = '''
# 04399
# 04086
# 04105
# 04110
# 04119
# 04132
# 04292
# 04079
# 04381
# 04066'''
# numeros_c=''''''

numeros_a = removeall(numeros_a.split("\n"), '')

numeros_b = removeall(numeros_b.split("\n"), '')

numeros_c = removeall(numeros_c.split("\n"), '')

compara([numeros_a, numeros_b, numeros_c])
