def time_arrival(n,m):

    h_departure = 6
    m_departure = 52

    sec = n * 495 + m * 432

    sec_due = sec % 60
    min = sec // 60
    hour = min // 60


    h_arrival= hour + h_departure
    m_arrival= min + m_departure

    m_final = m_arrival % 60
    h_final = m_arrival // 60 + h_arrival

    return str(h_final) + ":" + str(m_final)

